using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolChatAuthType {
    [DataMember(Name = "plain")]
    Plain = 0,

    [DataMember(Name = "rsoRefresh")]
    RsoRefresh = 2,

    [DataMember(Name = "rsoCreate")]
    RsoCreate = 1,

  }
}