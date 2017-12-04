using System.Runtime.Serialization;
namespace leagueapi {
  // Possible states of an asynchronous operation.
  [DataContract]  enum BindingAsyncState {
    // A request to cancel the operation has been made
    [DataMember(Name = "Cancelling")]
    Cancelling = 2,

    // Invalid state
    [DataMember(Name = "None")]
    None = 0,

    // The operation completed successfully
    [DataMember(Name = "Succeeded")]
    Succeeded = 4,

    // The operation encountered an error
    [DataMember(Name = "Failed")]
    Failed = 5,

    // The operation is in flight
    [DataMember(Name = "Running")]
    Running = 1,

    // The operation was cancelled
    [DataMember(Name = "Cancelled")]
    Cancelled = 3,

  }
}