using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameSettingsgamesettingsgameclient
    {
        [DataMember(Name = "running")]
        public bool Running { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameSettingsgamesettingsgameclient {\n");
            sb.Append("  Running: ").Append(Running).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}