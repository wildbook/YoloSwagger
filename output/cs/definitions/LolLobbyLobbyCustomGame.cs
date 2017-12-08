using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyCustomGame
    {
        [DataMember(Name = "lobbyName")]
        string LobbyName { get; set; }

        [DataMember(Name = "spectatorPolicy")]
        string SpectatorPolicy { get; set; }

        [DataMember(Name = "maxPlayerSlots")]
        int MaxPlayerSlots { get; set; }

        [DataMember(Name = "mapId")]
        int MapId { get; set; }

        [DataMember(Name = "gameType")]
        string GameType { get; set; }

        [DataMember(Name = "hasPassword")]
        bool HasPassword { get; set; }

        [DataMember(Name = "maxSpectatorSlots")]
        ulong MaxSpectatorSlots { get; set; }

        [DataMember(Name = "filledSpectatorSlots")]
        int FilledSpectatorSlots { get; set; }

        [DataMember(Name = "passbackUrl")]
        string PassbackUrl { get; set; }

        [DataMember(Name = "filledPlayerSlots")]
        int FilledPlayerSlots { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "ownerSummonerName")]
        string OwnerSummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyCustomGame {\n");
            sb.Append("  LobbyName: ").Append(LobbyName).Append("\n");
            sb.Append("  SpectatorPolicy: ").Append(SpectatorPolicy).Append("\n");
            sb.Append("  MaxPlayerSlots: ").Append(MaxPlayerSlots).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  HasPassword: ").Append(HasPassword).Append("\n");
            sb.Append("  MaxSpectatorSlots: ").Append(MaxSpectatorSlots).Append("\n");
            sb.Append("  FilledSpectatorSlots: ").Append(FilledSpectatorSlots).Append("\n");
            sb.Append("  PassbackUrl: ").Append(PassbackUrl).Append("\n");
            sb.Append("  FilledPlayerSlots: ").Append(FilledPlayerSlots).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  OwnerSummonerName: ").Append(OwnerSummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}