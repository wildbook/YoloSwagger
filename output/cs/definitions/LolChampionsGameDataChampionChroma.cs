using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsGameDataChampionChroma
    {
        [DataMember(Name = "chromaPath")]
        public string ChromaPath { get; set; }

        [DataMember(Name = "colors")]
        public string[] Colors { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsGameDataChampionChroma {\n");
            sb.Append("  ChromaPath: ").Append(ChromaPath).Append("\n");
            sb.Append("  Colors: ").Append(Colors).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}