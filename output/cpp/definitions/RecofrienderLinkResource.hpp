#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    std::string name;
    bool linked;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["name"] = v.name;
    j["linked"] = v.linked;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.linked = j.at("linked").get<bool>();
    v.reason = j.at("reason").get<std::string>();
  }
  inline std::string to_string(const RecofrienderLinkResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
