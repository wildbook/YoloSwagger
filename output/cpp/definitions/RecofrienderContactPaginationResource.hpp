#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactPaginationResource_t {
    uint64_t total;
    uint64_t count;
    bool more;
    uint64_t cached;
    uint64_t start;
    uint64_t limit;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource_t& v) {
    j["total"] = v.total;
    j["count"] = v.count;
    j["more"] = v.more;
    j["cached"] = v.cached;
    j["start"] = v.start;
    j["limit"] = v.limit;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource_t& v) {
    v.total = j.at("total").get<uint64_t>();
    v.count = j.at("count").get<uint64_t>();
    v.more = j.at("more").get<bool>();
    v.cached = j.at("cached").get<uint64_t>();
    v.start = j.at("start").get<uint64_t>();
    v.limit = j.at("limit").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderContactPaginationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
