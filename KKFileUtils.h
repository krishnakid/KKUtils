/*
 * ======= KKFileUtils (krishnakid file utils) =======
 * is a package to extend the simple file read/write capabilities
 * of native ANSI C.
 *
 * KKFileUtils allows for:
 * 	-	insertion and deletion from the middle of files, including smart
 * 		shifting of content left and right after such an insertion
 * 		or deletion.
 *
 *
 * @author Rahul Dhodapkar (krishnakid)
 * @version 8.17.2013		
 */

/*
 * method to insert data using the same format as fwrite()
 *
 * @return the total nubmer of elements successfully written.
 */
size_t finsert(const void * ptr, size_t size, size_t count, FILE * stream);

/*
 * method to delete data using the same format as fread()
 *
 * @return the total number of elements successfully deleted.
 */
size_t fdelete(void * ptr, size_t size, size_t count, FILE * stream);
