#ifndef SWAGGER_TYPES_RecofrienderConfig_HPP
#define SWAGGER_TYPES_RecofrienderConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderConfig {
    // 
    std::string ContactDetailsUrlTemplate;
    // 
    std::string ContactsUrlTemplate;
    // 
    bool EnableSocial;
    // 
    std::vector<std::string> EnabledNetworks;
    // 
    uint64_t ExternalCallTimeoutSeconds;
    // 
    std::string FaqLink;
  };

  void to_json(nlohmann::json& j, const RecofrienderConfig& v) {
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["EnableSocial"] = v.EnableSocial;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
    j["FaqLink"] = v.FaqLink;
  }

  void from_json(const nlohmann::json& j, RecofrienderConfig& v) {
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>;
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>;
    v.EnableSocial = j.at("EnableSocial").get<bool>;
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>;
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>;
    v.FaqLink = j.at("FaqLink").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderConfig_HPP
