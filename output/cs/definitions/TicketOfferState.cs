using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum TicketOfferState {
    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 1,

    [DataMember(Name = "ACTIVE")]
    ACTIVE = 0,

    [DataMember(Name = "REJECTED")]
    REJECTED = 2,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

  }
}