#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderConfig_t {
    std::string ContactDetailsUrlTemplate;
    std::string ContactsUrlTemplate;
    std::vector<std::string> EnabledNetworks;
    uint64_t ExternalCallTimeoutSeconds;
    bool EnableSocial;
    std::string FaqLink;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderConfig_t& v) {
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
    j["EnableSocial"] = v.EnableSocial;
    j["FaqLink"] = v.FaqLink;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderConfig_t& v) {
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>();
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>();
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>();
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>();
    v.EnableSocial = j.at("EnableSocial").get<bool>();
    v.FaqLink = j.at("FaqLink").get<std::string>();
  }
  inline std::string to_string(const RecofrienderConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
