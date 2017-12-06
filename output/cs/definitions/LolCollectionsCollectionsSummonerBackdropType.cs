using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolCollectionsCollectionsSummonerBackdropType {
    [DataMember(Name = "default")]
    Default = 0,

    [DataMember(Name = "highest-mastery")]
    HighestMastery = 3,

    [DataMember(Name = "recently-played")]
    RecentlyPlayed = 2,

    [DataMember(Name = "summoner-icon")]
    SummonerIcon = 1,

  }
}