using System.Runtime.Serialization;
namespace leagueapi {
  enum LolCollectionsCollectionsSummonerBackdropType {
    [DataMember(Name = "default")]
    Default = 0,

    [DataMember(Name = "summoner-icon")]
    SummonerIcon = 1,

    [DataMember(Name = "recently-played")]
    RecentlyPlayed = 2,

    [DataMember(Name = "highest-mastery")]
    HighestMastery = 3,

  }
}