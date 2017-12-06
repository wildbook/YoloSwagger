using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RsoAuthRegionStatus
    {
        [DataMember(Name = "enabled")]
        bool Enabled { get; set; }

        [DataMember(Name = "isLQFallbackAllowed")]
        bool IsLQFallbackAllowed { get; set; }

        [DataMember(Name = "isUserInfoEnabled")]
        bool IsUserInfoEnabled { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthRegionStatus {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  IsLQFallbackAllowed: ").Append(IsLQFallbackAllowed).Append("\n");
            sb.Append("  IsUserInfoEnabled: ").Append(IsUserInfoEnabled).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}