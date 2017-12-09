using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum RiotMessagingServiceState {
    [DataMember(Name = "Connected")]
    Connected = 5,

    [DataMember(Name = "Connecting")]
    Connecting = 3,

    [DataMember(Name = "Disconnected")]
    Disconnected = 1,

    [DataMember(Name = "Disconnecting")]
    Disconnecting = 0,

  }
}