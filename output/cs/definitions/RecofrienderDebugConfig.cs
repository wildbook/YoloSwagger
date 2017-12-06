using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RecofrienderDebugConfig
    {
        [DataMember(Name = "isHttpLoggingEnabled")]
        bool? IsHttpLoggingEnabled { get; set; }

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