#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "RosterWithdraw.hpp"
#include "BuybackMember.hpp"
namespace leagueapi {
  struct RosterDynamicStateDTO_t {
    std::vector<PhaseRosterSubDTO_t> phaseRosterSubs;
    std::vector<BuybackMember_t> members;
    RosterWithdraw_t withdraw;
    int64_t_t rosterId;
    int64_t_t tournamentId;
    std::vector<TicketOfferDTO_t> ticketOffers;
    std::vector<uint64_t> phaseCheckinStates;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO_t& v) {
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["members"] = v.members;
    j["withdraw"] = v.withdraw;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["ticketOffers"] = v.ticketOffers;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO_t& v) {
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO_t>>();
    v.members = j.at("members").get<std::vector<BuybackMember_t>>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.rosterId = j.at("rosterId").get<int64_t_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const RosterDynamicStateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
