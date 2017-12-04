using System.Runtime.Serialization;
namespace leagueapi {
  enum LeaguesLcdsQueueType {
    [DataMember(Name = "RANKED_FLEX_SR")]
    RANKED_FLEX_SR = 2,

    [DataMember(Name = "RANKED_FLEX_TT")]
    RANKED_FLEX_TT = 3,

    [DataMember(Name = "RANKED_SOLO_5x5")]
    RANKED_SOLO_5x5 = 1,

  }
}