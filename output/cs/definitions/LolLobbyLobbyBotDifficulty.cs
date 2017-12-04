using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyLobbyBotDifficulty {
    [DataMember(Name = "UBER")]
    UBER = 3,

    [DataMember(Name = "NONE")]
    NONE = -1,

    [DataMember(Name = "MEDIUM")]
    MEDIUM = 1,

    [DataMember(Name = "HARD")]
    HARD = 2,

    [DataMember(Name = "INTRO")]
    INTRO = 5,

    [DataMember(Name = "EASY")]
    EASY = 0,

    [DataMember(Name = "TUTORIAL")]
    TUTORIAL = 4,

  }
}