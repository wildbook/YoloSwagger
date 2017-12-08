#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactPaginationResource_t {
    uint64_t_t count;
    uint64_t_t cached;
    uint64_t_t start;
    uint64_t_t limit;
    uint64_t_t total;
    bool_t more;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource_t& v) {
    j["count"] = v.count;
    j["cached"] = v.cached;
    j["start"] = v.start;
    j["limit"] = v.limit;
    j["total"] = v.total;
    j["more"] = v.more;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource_t& v) {
    v.count = j.at("count").get<uint64_t_t>();
    v.cached = j.at("cached").get<uint64_t_t>();
    v.start = j.at("start").get<uint64_t_t>();
    v.limit = j.at("limit").get<uint64_t_t>();
    v.total = j.at("total").get<uint64_t_t>();
    v.more = j.at("more").get<bool_t>();
  }
  inline std::string to_string(const RecofrienderContactPaginationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
