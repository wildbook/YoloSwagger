using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderDebugConfig
    {
        [DataMember(Name = "isHttpLoggingEnabled")]
        public bool? IsHttpLoggingEnabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderDebugConfig {\n");
            sb.Append("  IsHttpLoggingEnabled: ").Append(IsHttpLoggingEnabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}