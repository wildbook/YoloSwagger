#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactPaginationResource_t {
    uint64_t cached;
    bool more;
    uint64_t total;
    uint64_t limit;
    uint64_t start;
    uint64_t count;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource_t& v) {
    j["cached"] = v.cached;
    j["more"] = v.more;
    j["total"] = v.total;
    j["limit"] = v.limit;
    j["start"] = v.start;
    j["count"] = v.count;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource_t& v) {
    v.cached = j.at("cached").get<uint64_t>();
    v.more = j.at("more").get<bool>();
    v.total = j.at("total").get<uint64_t>();
    v.limit = j.at("limit").get<uint64_t>();
    v.start = j.at("start").get<uint64_t>();
    v.count = j.at("count").get<uint64_t>();
  }
}
