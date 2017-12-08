#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    std::string reason;
    bool linked;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["reason"] = v.reason;
    j["linked"] = v.linked;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.linked = j.at("linked").get<bool>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const RecofrienderLinkResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
