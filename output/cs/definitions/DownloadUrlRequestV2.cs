using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct DownloadUrlRequestV2
    {
        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class DownloadUrlRequestV2 {\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}