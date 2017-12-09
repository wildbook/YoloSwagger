using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashPlayerChatRoster
    {
        [DataMember(Name = "endTimeMs")]
        public long EndTimeMs { get; set; }

        [DataMember(Name = "iconColorId")]
        public int IconColorId { get; set; }

        [DataMember(Name = "iconId")]
        public int IconId { get; set; }

        [DataMember(Name = "isRegistered")]
        public bool IsRegistered { get; set; }

        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "playerState")]
        public LolClashPlayerState PlayerState { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "startTimeMs")]
        public long StartTimeMs { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "tournamentState")]
        public LolClashTournamentState TournamentState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlayerChatRoster {\n");
            sb.Append("  EndTimeMs: ").Append(EndTimeMs).Append("\n");
            sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
            sb.Append("  IconId: ").Append(IconId).Append("\n");
            sb.Append("  IsRegistered: ").Append(IsRegistered).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PlayerState: ").Append(PlayerState).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  StartTimeMs: ").Append(StartTimeMs).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  TournamentState: ").Append(TournamentState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}