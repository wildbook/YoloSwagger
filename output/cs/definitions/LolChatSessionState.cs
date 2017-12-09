using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolChatSessionState {
    [DataMember(Name = "connected")]
    Connected = 1,

    [DataMember(Name = "disconnected")]
    Disconnected = 3,

    [DataMember(Name = "initializing")]
    Initializing = 0,

    [DataMember(Name = "loaded")]
    Loaded = 2,

    [DataMember(Name = "shuttingdown")]
    Shuttingdown = 4,

  }
}