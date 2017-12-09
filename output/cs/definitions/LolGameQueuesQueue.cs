using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesQueue
    {
        [DataMember(Name = "allowablePremadeSizes")]
        public int[] AllowablePremadeSizes { get; set; }

        [DataMember(Name = "areFreeChampionsAllowed")]
        public bool AreFreeChampionsAllowed { get; set; }

        [DataMember(Name = "category")]
        public LolGameQueuesQueueGameCategory Category { get; set; }

        [DataMember(Name = "championsRequiredToPlay")]
        public uint ChampionsRequiredToPlay { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "detailedDescription")]
        public string DetailedDescription { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        public string GameMutator { get; set; }

        [DataMember(Name = "gameTypeConfig")]
        public LolGameQueuesQueueGameTypeConfig GameTypeConfig { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "isRanked")]
        public bool IsRanked { get; set; }

        [DataMember(Name = "isTeamBuilderManaged")]
        public bool IsTeamBuilderManaged { get; set; }

        [DataMember(Name = "isTeamOnly")]
        public bool IsTeamOnly { get; set; }

        [DataMember(Name = "lastToggledOffTime")]
        public ulong LastToggledOffTime { get; set; }

        [DataMember(Name = "lastToggledOnTime")]
        public ulong LastToggledOnTime { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "maxLevel")]
        public uint MaxLevel { get; set; }

        [DataMember(Name = "maxSummonerLevelForFirstWinOfTheDay")]
        public uint MaxSummonerLevelForFirstWinOfTheDay { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        public int MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        public uint MinLevel { get; set; }

        [DataMember(Name = "minimumParticipantListSize")]
        public int MinimumParticipantListSize { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        public int NumPlayersPerTeam { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolGameQueuesQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "queueRewards")]
        public LolGameQueuesQueueReward QueueRewards { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "showPositionSelector")]
        public bool ShowPositionSelector { get; set; }

        [DataMember(Name = "spectatorEnabled")]
        public bool SpectatorEnabled { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueue {\n");
            sb.Append("  AllowablePremadeSizes: ").Append(AllowablePremadeSizes).Append("\n");
            sb.Append("  AreFreeChampionsAllowed: ").Append(AreFreeChampionsAllowed).Append("\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  ChampionsRequiredToPlay: ").Append(ChampionsRequiredToPlay).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DetailedDescription: ").Append(DetailedDescription).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsRanked: ").Append(IsRanked).Append("\n");
            sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
            sb.Append("  IsTeamOnly: ").Append(IsTeamOnly).Append("\n");
            sb.Append("  LastToggledOffTime: ").Append(LastToggledOffTime).Append("\n");
            sb.Append("  LastToggledOnTime: ").Append(LastToggledOnTime).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MaxLevel: ").Append(MaxLevel).Append("\n");
            sb.Append("  MaxSummonerLevelForFirstWinOfTheDay: ").Append(MaxSummonerLevelForFirstWinOfTheDay).Append("\n");
            sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
            sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
            sb.Append("  MinimumParticipantListSize: ").Append(MinimumParticipantListSize).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("  QueueRewards: ").Append(QueueRewards).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  SpectatorEnabled: ").Append(SpectatorEnabled).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}