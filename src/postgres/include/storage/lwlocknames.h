/* autogenerated from src/backend/storage/lmgr/lwlocknames.txt, do not edit */
/* there is deliberately not an #ifndef LWLOCKNAMES_H here */

#define ShmemIndexLock (&MainLWLockArray[1].lock)
#define OidGenLock (&MainLWLockArray[2].lock)
#define XidGenLock (&MainLWLockArray[3].lock)
#define ProcArrayLock (&MainLWLockArray[4].lock)
#define SInvalReadLock (&MainLWLockArray[5].lock)
#define SInvalWriteLock (&MainLWLockArray[6].lock)
#define WALBufMappingLock (&MainLWLockArray[7].lock)
#define WALWriteLock (&MainLWLockArray[8].lock)
#define ControlFileLock (&MainLWLockArray[9].lock)
#define CheckpointLock (&MainLWLockArray[10].lock)
#define XactSLRULock (&MainLWLockArray[11].lock)
#define SubtransSLRULock (&MainLWLockArray[12].lock)
#define MultiXactGenLock (&MainLWLockArray[13].lock)
#define MultiXactOffsetSLRULock (&MainLWLockArray[14].lock)
#define MultiXactMemberSLRULock (&MainLWLockArray[15].lock)
#define RelCacheInitLock (&MainLWLockArray[16].lock)
#define CheckpointerCommLock (&MainLWLockArray[17].lock)
#define TwoPhaseStateLock (&MainLWLockArray[18].lock)
#define TablespaceCreateLock (&MainLWLockArray[19].lock)
#define BtreeVacuumLock (&MainLWLockArray[20].lock)
#define AddinShmemInitLock (&MainLWLockArray[21].lock)
#define AutovacuumLock (&MainLWLockArray[22].lock)
#define AutovacuumScheduleLock (&MainLWLockArray[23].lock)
#define SyncScanLock (&MainLWLockArray[24].lock)
#define RelationMappingLock (&MainLWLockArray[25].lock)
#define NotifySLRULock (&MainLWLockArray[26].lock)
#define NotifyQueueLock (&MainLWLockArray[27].lock)
#define SerializableXactHashLock (&MainLWLockArray[28].lock)
#define SerializableFinishedListLock (&MainLWLockArray[29].lock)
#define SerializablePredicateListLock (&MainLWLockArray[30].lock)
#define SerialSLRULock (&MainLWLockArray[31].lock)
#define SyncRepLock (&MainLWLockArray[32].lock)
#define BackgroundWorkerLock (&MainLWLockArray[33].lock)
#define DynamicSharedMemoryControlLock (&MainLWLockArray[34].lock)
#define AutoFileLock (&MainLWLockArray[35].lock)
#define ReplicationSlotAllocationLock (&MainLWLockArray[36].lock)
#define ReplicationSlotControlLock (&MainLWLockArray[37].lock)
#define CommitTsSLRULock (&MainLWLockArray[38].lock)
#define CommitTsLock (&MainLWLockArray[39].lock)
#define ReplicationOriginLock (&MainLWLockArray[40].lock)
#define MultiXactTruncationLock (&MainLWLockArray[41].lock)
#define OldSnapshotTimeMapLock (&MainLWLockArray[42].lock)
#define LogicalRepWorkerLock (&MainLWLockArray[43].lock)
#define XactTruncationLock (&MainLWLockArray[44].lock)

#define NUM_INDIVIDUAL_LWLOCKS		45
