/* Everforest colors */
 char *colors[][2] = {
         /*               fg         bg       */
         [SchemeNorm] = { "#fbf1c7", "#322f2e" },
         [SchemeSel]  = { "#fb4934", "#665c54" },
         [SchemeOut]  = { "#fb4934", "#312e2d" },
         #if BORDER_PATCH
         [SchemeBorder] = { "#665c54", "#665c54" },
         #endif // BORDER_PATCH