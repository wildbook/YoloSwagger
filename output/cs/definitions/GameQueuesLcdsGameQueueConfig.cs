using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct GameQueuesLcdsGameQueueConfig
    {
        [DataMember(Name = "blockedMinutesThreshold")]
        uint BlockedMinutesThreshold { get; set; }

        [DataMember(Name = "botsCanSpawnOnBlueSide")]
        bool BotsCanSpawnOnBlueSide { get; set; }

        [DataMember(Name = "cacheName")]
        string CacheName { get; set; }

        [DataMember(Name = "disallowFreeChampions")]
        bool DisallowFreeChampions { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "gameMutators")]
        string[] GameMutators { get; set; }

        [DataMember(Name = "gameTypeConfigId")]
        int GameTypeConfigId { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "lastToggledOffTime")]
        ulong LastToggledOffTime { get; set; }

        [DataMember(Name = "lastToggledOnTime")]
        ulong LastToggledOnTime { get; set; }

        [DataMember(Name = "mapSelectionAlgorithm")]
        string MapSelectionAlgorithm { get; set; }

        [DataMember(Name = "matchingThrottleConfig")]
        GameQueuesLcdsMatchingThrottleConfig MatchingThrottleConfig { get; set; }

        [DataMember(Name = "maxLevel")]
        uint MaxLevel { get; set; }

        [DataMember(Name = "maxSummonerLevelForFirstWinOfTheDay")]
        uint MaxSummonerLevelForFirstWinOfTheDay { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        uint MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        uint MinLevel { get; set; }

        [DataMember(Name = "minimumParticipantListSize")]
        uint MinimumParticipantListSize { get; set; }

        [DataMember(Name = "minimumQueueDodgeDelayTime")]
        uint MinimumQueueDodgeDelayTime { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        uint NumPlayersPerTeam { get; set; }

        [DataMember(Name = "pointsConfigKey")]
        string PointsConfigKey { get; set; }

        [DataMember(Name = "queueBonusKey")]
        string QueueBonusKey { get; set; }

        [DataMember(Name = "queueState")]
        string QueueState { get; set; }

        [DataMember(Name = "queueStateString")]
        string QueueStateString { get; set; }

        [DataMember(Name = "randomizeTeamSizes")]
        bool RandomizeTeamSizes { get; set; }

        [DataMember(Name = "ranked")]
        bool Ranked { get; set; }

        [DataMember(Name = "supportedMapIds")]
        int[] SupportedMapIds { get; set; }

        [DataMember(Name = "teamOnly")]
        bool TeamOnly { get; set; }

        [DataMember(Name = "thresholdEnabled")]
        bool ThresholdEnabled { get; set; }

        [DataMember(Name = "thresholdSize")]
        long ThresholdSize { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "typeString")]
        string TypeString { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameQueuesLcdsGameQueueConfig {\n");
            sb.Append("  BlockedMinutesThreshold: ").Append(BlockedMinutesThreshold).Append("\n");
            sb.Append("  BotsCanSpawnOnBlueSide: ").Append(BotsCanSpawnOnBlueSide).Append("\n");
            sb.Append("  CacheName: ").Append(CacheName).Append("\n");
            sb.Append("  DisallowFreeChampions: ").Append(DisallowFreeChampions).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  GameTypeConfigId: ").Append(GameTypeConfigId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastToggledOffTime: ").Append(LastToggledOffTime).Append("\n");
            sb.Append("  LastToggledOnTime: ").Append(LastToggledOnTime).Append("\n");
            sb.Append("  MapSelectionAlgorithm: ").Append(MapSelectionAlgorithm).Append("\n");
            sb.Append("  MatchingThrottleConfig: ").Append(MatchingThrottleConfig).Append("\n");
            sb.Append("  MaxLevel: ").Append(MaxLevel).Append("\n");
            sb.Append("  MaxSummonerLevelForFirstWinOfTheDay: ").Append(MaxSummonerLevelForFirstWinOfTheDay).Append("\n");
            sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
            sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
            sb.Append("  MinimumParticipantListSize: ").Append(MinimumParticipantListSize).Append("\n");
            sb.Append("  MinimumQueueDodgeDelayTime: ").Append(MinimumQueueDodgeDelayTime).Append("\n");
            sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
            sb.Append("  PointsConfigKey: ").Append(PointsConfigKey).Append("\n");
            sb.Append("  QueueBonusKey: ").Append(QueueBonusKey).Append("\n");
            sb.Append("  QueueState: ").Append(QueueState).Append("\n");
            sb.Append("  QueueStateString: ").Append(QueueStateString).Append("\n");
            sb.Append("  RandomizeTeamSizes: ").Append(RandomizeTeamSizes).Append("\n");
            sb.Append("  Ranked: ").Append(Ranked).Append("\n");
            sb.Append("  SupportedMapIds: ").Append(SupportedMapIds).Append("\n");
            sb.Append("  TeamOnly: ").Append(TeamOnly).Append("\n");
            sb.Append("  ThresholdEnabled: ").Append(ThresholdEnabled).Append("\n");
            sb.Append("  ThresholdSize: ").Append(ThresholdSize).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  TypeString: ").Append(TypeString).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}