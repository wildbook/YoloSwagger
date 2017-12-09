using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksChampSelectSession
    {
        [DataMember(Name = "actions")]
        public dynamic[] Actions { get; set; }

        [DataMember(Name = "bans")]
        public LolPerksChampSelectBannedChampions Bans { get; set; }

        [DataMember(Name = "chatDetails")]
        public LolPerksChampSelectChatRoomDetails ChatDetails { get; set; }

        [DataMember(Name = "isSpectating")]
        public bool IsSpectating { get; set; }

        [DataMember(Name = "localPlayerCellId")]
        public long LocalPlayerCellId { get; set; }

        [DataMember(Name = "myTeam")]
        public LolPerksChampSelectPlayerSelection[] MyTeam { get; set; }

        [DataMember(Name = "theirTeam")]
        public LolPerksChampSelectPlayerSelection[] TheirTeam { get; set; }

        [DataMember(Name = "timer")]
        public LolPerksChampSelectTimer Timer { get; set; }

        [DataMember(Name = "trades")]
        public LolPerksChampSelectTradeContract[] Trades { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampSelectSession {\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  Bans: ").Append(Bans).Append("\n");
            sb.Append("  ChatDetails: ").Append(ChatDetails).Append("\n");
            sb.Append("  IsSpectating: ").Append(IsSpectating).Append("\n");
            sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
            sb.Append("  MyTeam: ").Append(MyTeam).Append("\n");
            sb.Append("  TheirTeam: ").Append(TheirTeam).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("  Trades: ").Append(Trades).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}