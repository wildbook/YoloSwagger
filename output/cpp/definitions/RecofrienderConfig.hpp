#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderConfig_t {
    bool EnableSocial;
    uint64_t ExternalCallTimeoutSeconds;
    std::string ContactsUrlTemplate;
    std::vector<std::string> EnabledNetworks;
    std::string FaqLink;
    std::string ContactDetailsUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderConfig_t& v) {
    j["EnableSocial"] = v.EnableSocial;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["FaqLink"] = v.FaqLink;
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderConfig_t& v) {
    v.EnableSocial = j.at("EnableSocial").get<bool>();
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>();
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>();
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>();
    v.FaqLink = j.at("FaqLink").get<std::string>();
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>();
  }
  inline std::string to_string(const RecofrienderConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
