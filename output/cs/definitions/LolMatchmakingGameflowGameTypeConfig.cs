using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingGameflowGameTypeConfig
    {
        [DataMember(Name = "reroll")]
        bool Reroll { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingGameflowGameTypeConfig {\n");
            sb.Append("  Reroll: ").Append(Reroll).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}