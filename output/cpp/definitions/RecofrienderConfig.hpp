#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderConfig_t {
    std::string ContactsUrlTemplate;
    std::string FaqLink;
    bool EnableSocial;
    std::string ContactDetailsUrlTemplate;
    std::vector<std::string> EnabledNetworks;
    uint64_t ExternalCallTimeoutSeconds;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderConfig_t& v) {
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["FaqLink"] = v.FaqLink;
    j["EnableSocial"] = v.EnableSocial;
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderConfig_t& v) {
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>();
    v.FaqLink = j.at("FaqLink").get<std::string>();
    v.EnableSocial = j.at("EnableSocial").get<bool>();
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>();
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>();
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
