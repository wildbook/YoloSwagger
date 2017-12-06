#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BlockedPlayerResource_t {
    std::string name;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const BlockedPlayerResource_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, BlockedPlayerResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
}
