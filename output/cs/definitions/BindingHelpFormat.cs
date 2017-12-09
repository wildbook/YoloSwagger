using System.Runtime.Serialization;
namespace LeagueClientApi {
  // Help format for binding functions and types.
  [DataContract]  public enum BindingHelpFormat {
    // Python epytext format
    [DataMember(Name = "Epytext")]
    Epytext = 2,

    // Native help format
    [DataMember(Name = "Full")]
    Full = 1,

  }
}