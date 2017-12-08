#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderConfig_t {
    std::string_t ContactDetailsUrlTemplate;
    std::string_t ContactsUrlTemplate;
    std::vector<std::string> EnabledNetworks;
    uint64_t_t ExternalCallTimeoutSeconds;
    bool_t EnableSocial;
    std::string_t FaqLink;
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
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string_t>();
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string_t>();
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>();
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t_t>();
    v.EnableSocial = j.at("EnableSocial").get<bool_t>();
    v.FaqLink = j.at("FaqLink").get<std::string_t>();
  }
  inline std::string to_string(const RecofrienderConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
