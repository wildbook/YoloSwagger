#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderConfig_t {
    std::string ContactsUrlTemplate;
    uint64_t ExternalCallTimeoutSeconds;
    std::string FaqLink;
    bool EnableSocial;
    std::vector<std::string> EnabledNetworks;
    std::string ContactDetailsUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderConfig_t& v) {
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate;
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds;
    j["FaqLink"] = v.FaqLink;
    j["EnableSocial"] = v.EnableSocial;
    j["EnabledNetworks"] = v.EnabledNetworks;
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderConfig_t& v) {
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>();
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>();
    v.FaqLink = j.at("FaqLink").get<std::string>();
    v.EnableSocial = j.at("EnableSocial").get<bool>();
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>();
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>();
  }
  inline std::string to_string(const RecofrienderConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
