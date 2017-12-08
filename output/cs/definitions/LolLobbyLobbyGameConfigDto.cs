using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyGameConfigDto
    {
        [DataMember(Name = "customLobbyName")]
        string CustomLobbyName { get; set; }

        [DataMember(Name = "maxHumanPlayers")]
        int MaxHumanPlayers { get; set; }

        [DataMember(Name = "premadeSizeAllowed")]
        bool PremadeSizeAllowed { get; set; }

        [DataMember(Name = "showPositionSelector")]
        bool ShowPositionSelector { get; set; }

        [DataMember(Name = "maxTeamSize")]
        int MaxTeamSize { get; set; }

        [DataMember(Name = "customSpectatorPolicy")]
        LolLobbyQueueCustomGameSpectatorPolicy CustomSpectatorPolicy { get; set; }

        [DataMember(Name = "allowablePremadeSizes")]
        int[] AllowablePremadeSizes { get; set; }

        [DataMember(Name = "mapId")]
        int MapId { get; set; }

        [DataMember(Name = "pickType")]
        string PickType { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "isLobbyFull")]
        bool IsLobbyFull { get; set; }

        [DataMember(Name = "customTeam200")]
        LolLobbyLobbyParticipantDto[] CustomTeam200 { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "customSpectators")]
        LolLobbyLobbyParticipantDto[] CustomSpectators { get; set; }

        [DataMember(Name = "customMutatorName")]
        string CustomMutatorName { get; set; }

        [DataMember(Name = "gameMutator")]
        string GameMutator { get; set; }

        [DataMember(Name = "customTeam100")]
        LolLobbyLobbyParticipantDto[] CustomTeam100 { get; set; }

        [DataMember(Name = "maxLobbySize")]
        int MaxLobbySize { get; set; }

        [DataMember(Name = "isCustom")]
        bool IsCustom { get; set; }

        [DataMember(Name = "isTeamBuilderManaged")]
        bool IsTeamBuilderManaged { get; set; }

        [DataMember(Name = "customRewardsDisabledReasons")]
        string[] CustomRewardsDisabledReasons { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyGameConfigDto {\n");
            sb.Append("  CustomLobbyName: ").Append(CustomLobbyName).Append("\n");
            sb.Append("  MaxHumanPlayers: ").Append(MaxHumanPlayers).Append("\n");
            sb.Append("  PremadeSizeAllowed: ").Append(PremadeSizeAllowed).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  MaxTeamSize: ").Append(MaxTeamSize).Append("\n");
            sb.Append("  CustomSpectatorPolicy: ").Append(CustomSpectatorPolicy).Append("\n");
            sb.Append("  AllowablePremadeSizes: ").Append(AllowablePremadeSizes).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  PickType: ").Append(PickType).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  IsLobbyFull: ").Append(IsLobbyFull).Append("\n");
            sb.Append("  CustomTeam200: ").Append(CustomTeam200).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  CustomSpectators: ").Append(CustomSpectators).Append("\n");
            sb.Append("  CustomMutatorName: ").Append(CustomMutatorName).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  CustomTeam100: ").Append(CustomTeam100).Append("\n");
            sb.Append("  MaxLobbySize: ").Append(MaxLobbySize).Append("\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
            sb.Append("  CustomRewardsDisabledReasons: ").Append(CustomRewardsDisabledReasons).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}