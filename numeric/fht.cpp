n a m e s p a c e   f h t   {  
     v o i d   h a d a m a r d ( v e c t o r   < i n t >   & a ,   c o n s t   i n t   m   =   m d )   {  
         i n t   n   =   a . s i z e ( ) ;  
         f o r   ( i n t   k   =   1 ;   k   <   n ;   k   < < =   1 )   {  
             f o r   ( i n t   i   =   0 ;   i   <   n ;   i   + =   2   *   k )   {  
                 f o r   ( i n t   j   =   0 ;   j   <   k ;   j + + )   {  
                     i n t   x   =   a [ i   +   j ] ;  
                     i n t   y   =   a [ i   +   j   +   k ] ;  
                     a d d ( a [ i   +   j ] ,   y ,   m ) ;  
                     a [ i   +   j   +   k ]   =   x ;  
                     s u b ( a [ i   +   j   +   k ] ,   y ,   m ) ;  
                 }  
             }  
         }  
     }  
  
     v e c t o r   < i n t >   m u l t i p l y ( v e c t o r   < i n t >   a ,   v e c t o r   < i n t >   b ,   c o n s t   i n t   m   =   m d )   {  
         i n t   n   =   1 ;  
         w h i l e   ( n   <   ( i n t )   a . s i z e ( )   | |   n   <   ( i n t )   b . s i z e ( ) )   {  
             n   * =   2 ;  
         }  
         a . r e s i z e ( n ) ;  
         b . r e s i z e ( n ) ;  
         h a d a m a r d ( a ,   m ) ;  
         h a d a m a r d ( b ,   m ) ;  
         f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
             a [ i ]   =   m u l ( a [ i ] ,   b [ i ] ,   m ) ;  
         }  
         h a d a m a r d ( a ,   m ) ;  
         i n t   q   =   i n v ( n ,   m ) ;  
         f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
             a [ i ]   =   m u l ( a [ i ] ,   q ,   m ) ;  
         }  
         r e t u r n   a ;  
     }  
  
     v e c t o r   < i n t >   s q u a r e ( v e c t o r   < i n t >   a ,   c o n s t   i n t   m   =   m d )   {  
         i n t   n   =   1 ;  
         w h i l e   ( n   <   ( i n t )   a . s i z e ( ) )   {  
             n   * =   2 ;  
         }  
         a . r e s i z e ( n ) ;  
         h a d a m a r d ( a ,   m ) ;  
         f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
             a [ i ]   =   m u l ( a [ i ] ,   a [ i ] ,   m ) ;  
         }  
         h a d a m a r d ( a ,   m ) ;  
         i n t   q   =   i n v ( n ,   m ) ;  
         f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
             a [ i ]   =   m u l ( a [ i ] ,   q ,   m ) ;  
         }  
         r e t u r n   a ;  
     }  
     / /   n o t e :   u s e s   n u m e r i c / m d ;   d o e s n ' t   w o r k   w i t h   e v e n   m o d u l o  
 } ; 