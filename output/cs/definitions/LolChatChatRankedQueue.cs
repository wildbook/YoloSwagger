using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolChatChatRankedQueue {
    [DataMember(Name = "INVALID")]
    INVALID = 0,

    [DataMember(Name = "RANKED_FLEX_SR")]
    RANKED_FLEX_SR = 2,

    [DataMember(Name = "RANKED_FLEX_TT")]
    RANKED_FLEX_TT = 1,

    [DataMember(Name = "RANKED_SOLO_5x5")]
    RANKED_SOLO_5x5 = 3,

    [DataMember(Name = "RANKED_TEAM_3x3")]
    RANKED_TEAM_3x3 = 4,

    [DataMember(Name = "RANKED_TEAM_5x5")]
    RANKED_TEAM_5x5 = 5,

  }
}