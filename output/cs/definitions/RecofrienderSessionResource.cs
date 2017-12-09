using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderSessionResource
    {
        [DataMember(Name = "sessionExpire")]
        public uint SessionExpire { get; set; }

        [DataMember(Name = "sessionState")]
        public string SessionState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderSessionResource {\n");
            sb.Append("  SessionExpire: ").Append(SessionExpire).Append("\n");
            sb.Append("  SessionState: ").Append(SessionState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}