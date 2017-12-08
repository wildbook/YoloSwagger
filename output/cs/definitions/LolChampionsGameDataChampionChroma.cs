using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampionsGameDataChampionChroma
    {
        [DataMember(Name = "colors")]
        string[] Colors { get; set; }

        [DataMember(Name = "chromaPath")]
        string ChromaPath { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsGameDataChampionChroma {\n");
            sb.Append("  Colors: ").Append(Colors).Append("\n");
            sb.Append("  ChromaPath: ").Append(ChromaPath).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}