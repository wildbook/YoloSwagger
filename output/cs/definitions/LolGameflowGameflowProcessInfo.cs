using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowProcessInfo
    {
        [DataMember(Name = "pid")]
        public uint Pid { get; set; }

        [DataMember(Name = "rawArgs")]
        public string[] RawArgs { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowProcessInfo {\n");
            sb.Append("  Pid: ").Append(Pid).Append("\n");
            sb.Append("  RawArgs: ").Append(RawArgs).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}