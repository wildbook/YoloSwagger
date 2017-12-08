using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum TicketOfferState {
    [DataMember(Name = "ACTIVE")]
    ACTIVE = 0,

    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 1,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

    [DataMember(Name = "REJECTED")]
    REJECTED = 2,

  }
}