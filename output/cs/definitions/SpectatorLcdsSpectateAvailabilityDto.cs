using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SpectatorLcdsSpectateAvailabilityDto
    {
        [DataMember(Name = "teamOrSummonerIds")]
        public string[] TeamOrSummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SpectatorLcdsSpectateAvailabilityDto {\n");
            sb.Append("  TeamOrSummonerIds: ").Append(TeamOrSummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}