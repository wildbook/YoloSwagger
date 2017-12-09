using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyCustomGame
    {
        [DataMember(Name = "filledPlayerSlots")]
        public int FilledPlayerSlots { get; set; }

        [DataMember(Name = "filledSpectatorSlots")]
        public int FilledSpectatorSlots { get; set; }

        [DataMember(Name = "gameType")]
        public string GameType { get; set; }

        [DataMember(Name = "hasPassword")]
        public bool HasPassword { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "lobbyName")]
        public string LobbyName { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "maxPlayerSlots")]
        public int MaxPlayerSlots { get; set; }

        [DataMember(Name = "maxSpectatorSlots")]
        public ulong MaxSpectatorSlots { get; set; }

        [DataMember(Name = "ownerSummonerName")]
        public string OwnerSummonerName { get; set; }

        [DataMember(Name = "passbackUrl")]
        public string PassbackUrl { get; set; }

        [DataMember(Name = "spectatorPolicy")]
        public string SpectatorPolicy { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyCustomGame {\n");
            sb.Append("  FilledPlayerSlots: ").Append(FilledPlayerSlots).Append("\n");
            sb.Append("  FilledSpectatorSlots: ").Append(FilledSpectatorSlots).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  HasPassword: ").Append(HasPassword).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LobbyName: ").Append(LobbyName).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MaxPlayerSlots: ").Append(MaxPlayerSlots).Append("\n");
            sb.Append("  MaxSpectatorSlots: ").Append(MaxSpectatorSlots).Append("\n");
            sb.Append("  OwnerSummonerName: ").Append(OwnerSummonerName).Append("\n");
            sb.Append("  PassbackUrl: ").Append(PassbackUrl).Append("\n");
            sb.Append("  SpectatorPolicy: ").Append(SpectatorPolicy).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}