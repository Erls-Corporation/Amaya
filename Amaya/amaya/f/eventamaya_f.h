/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern AmayaNetRequestPtr NextNetRequest ( void );
extern void StopRequest ( int doc );
extern AmayaNetStatus GetObjectWWW ( int doc,
                                     STRING urlName,
                                     STRING postString,
                                     STRING outputfile,
                                     int mode,
                                     TIcbf * incremental_cbf,
                                     void *context_icbf,
                                     TTcbf * terminate_cbf,
                                     void *context_tcbf,
                                     ThotBool error_html );
extern int PutObjectWWW ( int doc,
                          STRING fileName,
                          STRING urlName,
                          int mode,
                          PicType contentType,
                          TTcbf * terminate_cbf,
                          void *context_tcbf );

#else /* __STDC__ */

extern AmayaNetRequestPtr NextNetRequest (/* void */);
extern void StopRequest (/* int doc */);
extern AmayaNetStatus GetObjectWWW (/* int doc,
                                       char *urlName,
                                       char *postString,
                                       char *outputfile,
                                       int mode,
                                       TIcbf * incremental_cbf,
                                       void *context_icbf,
                                       TTcbf * terminate_cbf,
                                       void *context_tcbf,
                                       ThotBool error_html */);
extern int PutObjectWWW (/* int doc,
                            char *fileName,
                            char *urlName,
                            int mode,
                            PicType contentType,
                            TTcbf * terminate_cbf,
                            void *context_tcbf */);

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
