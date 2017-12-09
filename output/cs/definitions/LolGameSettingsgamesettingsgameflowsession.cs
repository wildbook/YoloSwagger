using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameSettingsgamesettingsgameflowsession
    {
        [DataMember(Name = "gameClient")]
        public LolGameSettingsgamesettingsgameclient GameClient { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameSettingsgamesettingsgameflowsession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}