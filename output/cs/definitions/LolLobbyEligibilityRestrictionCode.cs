using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyEligibilityRestrictionCode {
    [DataMember(Name = "PlayerMinLevelRestriction")]
    PlayerMinLevelRestriction = 15,

    [DataMember(Name = "PlayerInGameRestriction")]
    PlayerInGameRestriction = 11,

    [DataMember(Name = "QueueUnsupported")]
    QueueUnsupported = 1,

    [DataMember(Name = "TeamDivisionRestriction")]
    TeamDivisionRestriction = 6,

    [DataMember(Name = "UnknownRestriction")]
    UnknownRestriction = 20,

    [DataMember(Name = "PlayerMinorRestriction")]
    PlayerMinorRestriction = 16,

    [DataMember(Name = "PlayerLevelRestriction")]
    PlayerLevelRestriction = 2,

    [DataMember(Name = "QueueDisabled")]
    QueueDisabled = 0,

    [DataMember(Name = "PlayerBannedRestriction")]
    PlayerBannedRestriction = 4,

    [DataMember(Name = "PlayerMaxLevelRestriction")]
    PlayerMaxLevelRestriction = 14,

    [DataMember(Name = "PlayerDodgeRestriction")]
    PlayerDodgeRestriction = 10,

    [DataMember(Name = "PlayerLeaverBustedRestriction")]
    PlayerLeaverBustedRestriction = 12,

    [DataMember(Name = "PlayerLeaverTaintedWarningRestriction")]
    PlayerLeaverTaintedWarningRestriction = 13,

    [DataMember(Name = "PrerequisiteQueuesNotPlayedRestriction")]
    PrerequisiteQueuesNotPlayedRestriction = 19,

    [DataMember(Name = "PlayerBingeRestriction")]
    PlayerBingeRestriction = 9,

    [DataMember(Name = "PlayerAvailableChampionRestriction")]
    PlayerAvailableChampionRestriction = 5,

    [DataMember(Name = "PlayerRankedSuspensionRestriction")]
    PlayerRankedSuspensionRestriction = 17,

    [DataMember(Name = "TeamHighMMRMaxSizeRestriction")]
    TeamHighMMRMaxSizeRestriction = 18,

    [DataMember(Name = "TeamMaxSizeRestriction")]
    TeamMaxSizeRestriction = 7,

    [DataMember(Name = "PlayerTimedRestriction")]
    PlayerTimedRestriction = 3,

    [DataMember(Name = "TeamMinSizeRestriction")]
    TeamMinSizeRestriction = 8,

  }
}