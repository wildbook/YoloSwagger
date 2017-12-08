#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactCountResource_t {
    uint64_t count;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactCountResource_t& v) {
    j["count"] = v.count;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactCountResource_t& v) {
    v.count = j.at("count").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderContactCountResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
