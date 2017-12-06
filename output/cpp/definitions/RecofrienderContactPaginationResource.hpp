#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactPaginationResource_t {
    uint64_t cached;
    uint64_t count;
    uint64_t limit;
    bool more;
    uint64_t start;
    uint64_t total;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource_t& v) {
    j["cached"] = v.cached;
    j["count"] = v.count;
    j["limit"] = v.limit;
    j["more"] = v.more;
    j["start"] = v.start;
    j["total"] = v.total;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource_t& v) {
    v.cached = j.at("cached").get<uint64_t>();
    v.count = j.at("count").get<uint64_t>();
    v.limit = j.at("limit").get<uint64_t>();
    v.more = j.at("more").get<bool>();
    v.start = j.at("start").get<uint64_t>();
    v.total = j.at("total").get<uint64_t>();
  }
}
