using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct NetworkExperimentResource
    {
        [DataMember(Name = "status")]
        NetworkExperimentStatus Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class NetworkExperimentResource {\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}