using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameQueuesLcdsGameQueueConfig
    {
        [DataMember(Name = "blockedMinutesThreshold")]
        public uint BlockedMinutesThreshold { get; set; }

        [DataMember(Name = "botsCanSpawnOnBlueSide")]
        public bool BotsCanSpawnOnBlueSide { get; set; }

        [DataMember(Name = "cacheName")]
        public string CacheName { get; set; }

        [DataMember(Name = "disallowFreeChampions")]
        public bool DisallowFreeChampions { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutators")]
        public string[] GameMutators { get; set; }

        [DataMember(Name = "gameTypeConfigId")]
        public int GameTypeConfigId { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "lastToggledOffTime")]
        public ulong LastToggledOffTime { get; set; }

        [DataMember(Name = "lastToggledOnTime")]
        public ulong LastToggledOnTime { get; set; }

        [DataMember(Name = "mapSelectionAlgorithm")]
        public string MapSelectionAlgorithm { get; set; }

        [DataMember(Name = "matchingThrottleConfig")]
        public GameQueuesLcdsMatchingThrottleConfig MatchingThrottleConfig { get; set; }

        [DataMember(Name = "maxLevel")]
        public uint MaxLevel { get; set; }

        [DataMember(Name = "maxSummonerLevelForFirstWinOfTheDay")]
        public uint MaxSummonerLevelForFirstWinOfTheDay { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        public uint MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        public uint MinLevel { get; set; }

        [DataMember(Name = "minimumParticipantListSize")]
        public uint MinimumParticipantListSize { get; set; }

        [DataMember(Name = "minimumQueueDodgeDelayTime")]
        public uint MinimumQueueDodgeDelayTime { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        public uint NumPlayersPerTeam { get; set; }

        [DataMember(Name = "pointsConfigKey")]
        public string PointsConfigKey { get; set; }

        [DataMember(Name = "queueBonusKey")]
        public string QueueBonusKey { get; set; }

        [DataMember(Name = "queueState")]
        public string QueueState { get; set; }

        [DataMember(Name = "queueStateString")]
        public string QueueStateString { get; set; }

        [DataMember(Name = "randomizeTeamSizes")]
        public bool RandomizeTeamSizes { get; set; }

        [DataMember(Name = "ranked")]
        public bool Ranked { get; set; }

        [DataMember(Name = "supportedMapIds")]
        public int[] SupportedMapIds { get; set; }

        [DataMember(Name = "teamOnly")]
        public bool TeamOnly { get; set; }

        [DataMember(Name = "thresholdEnabled")]
        public bool ThresholdEnabled { get; set; }

        [DataMember(Name = "thresholdSize")]
        public long ThresholdSize { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "typeString")]
        public string TypeString { get; set; }

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